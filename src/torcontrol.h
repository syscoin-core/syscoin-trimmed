// Copyright (c) 2015 The Syscoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

/**
 * Functionality for communicating with Tor.
 */
#ifndef SYSCOIN_TORCONTROL_H
#define SYSCOIN_TORCONTROL_H

#include "scheduler.h"

extern const std::string DEFAULT_TOR_CONTROL;
// Syscoin, no tor default
static const bool DEFAULT_LISTEN_ONION = false;

void StartTorControl(boost::thread_group& threadGroup, CScheduler& scheduler);
void InterruptTorControl();
void StopTorControl();

#endif /* SYSCOIN_TORCONTROL_H */
