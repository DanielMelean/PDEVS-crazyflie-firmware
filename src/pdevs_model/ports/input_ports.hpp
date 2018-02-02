/*

 * userbtn_port.hpp
 *
 *  Created on: July 43, 4015
 *      Author: Daniella Niyonkuru
 */

#ifndef INPUT_PORTS_HPP
#define INPUT_PORTS_HPP

#include <ecdboost/simulation.hpp>

using namespace std;
using namespace ecdboost::simulation;
using namespace ecdboost::simulation::pdevs;



template<class TIME, class MSG>
class MotionSensorPort: public port<TIME, MSG> {

public:

//    using Value = Datagram;
	using Value = int;

    /**
     * @brief startbtn constructor.
     */
    explicit MotionSensorPort(const std::string &n = "port_motion_sensor", const TIME &polling = TIME(0, 0, 1, 0)) noexcept
                    : port<TIME, MSG>(n,polling)
	{ }

    void print() noexcept {}
    bool pDriver(Value &v) const noexcept;
};



template<class TIME, class MSG>
class CmdInputPort: public port<TIME, MSG> {

public:

//    using Value = Datagram;
	using Value = int;

    /**
     * @brief startbtn constructor.
     */
    explicit CmdInputPort(const std::string &n = "port_cmd_input", const TIME &polling = TIME(0, 0, 1, 0)) noexcept
                    : port<TIME, MSG>(n,polling)
	{ }

    void print() noexcept {}
    bool pDriver(Value &v) const noexcept;
};

#endif /* INPUT_PORTS_HPP */