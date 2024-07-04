//
// Created by MatzZze on 05.11.2022.
//

#ifndef EVENTBUS_EVENT_H
#define EVENTBUS_EVENT_H

#include <typeinfo>

namespace EventBus {
class Event {
public:
    virtual const std::type_info &getType() = 0;
    virtual ~Event() = default;
};
} // namespace EventBus

#endif // EVENTBUS_EVENT_H