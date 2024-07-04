//
// Created by MatzZze on 05.11.2022.
//

#ifndef EVENTBUS_EVENTHANDLER_H
#define EVENTBUS_EVENTHANDLER_H

#include <memory>
#include "Event.h"

namespace EventBus {
class EventHandlerBase {
public:
    virtual const std::type_info &getEventType() const = 0;
    virtual void dispatch(std::shared_ptr<Event> &event) = 0;
    virtual ~EventHandlerBase() = default;
};

template <class TEvent> class EventHandler : public EventHandlerBase {
public:
    void dispatch(std::shared_ptr<Event> &event) final {
        auto casted = std::static_pointer_cast<TEvent>(event);
        onEvent(casted);
    }

    const std::type_info &getEventType() const final { return typeid(TEvent); }

    virtual void onEvent(std::shared_ptr<TEvent> &event) = 0;
};

} // namespace EventBus

#endif // EVENTBUS_EVENTHANDLER_H