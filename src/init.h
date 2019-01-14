// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2012 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_INIT_H
#define BITCOIN_INIT_H

#if defined(HAVE_CONFIG_H)
#include "bitcoin-config.h"
#endif

#include <string>
#include <boost/thread.hpp>

class CWallet;

namespace boost {
    class thread_group;
} // namespace boost
extern volatile bool fRequestShutdown;
extern CWallet* pwalletMain;
void StartShutdown();
bool ShutdownRequested();
void Shutdown();
bool AppInit2(boost::thread_group& threadGroup, bool fForceServer);
extern bool fOnlyTor;

/* The help message mode determines what help message to show */
enum HelpMessageMode
{
    HMM_BITCOIND,
    HMM_BITCOIN_QT
};

std::string HelpMessage(HelpMessageMode mode);

#endif
