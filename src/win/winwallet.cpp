//
// Created by amarko on 28.11.18..
//


#include <winwallet.h>

#include <windows_wrapper.h>
#include "winwalletlistener.h"
#include "winpendingtransaction.h"



namespace Safex {

  WinTransactionInfo::~WinTransactionInfo()
  {

  }

  int WinTransactionInfo::direction() const
  {
    return static_cast<int>(win_txinfo_direction(m_innerPtr));
  }

  bool WinTransactionInfo::isPending() const
  {
    return static_cast<bool>(win_txinfo_isPendingB(m_innerPtr));
  }

  bool WinTransactionInfo::isFailed() const
  {
    return static_cast<bool>(win_txinfo_isFailedB(m_innerPtr));
  }

  uint64_t WinTransactionInfo::amount() const
  {
    return win_txinfo_amount(m_innerPtr);
  }

  uint64_t WinTransactionInfo::fee() const
  {
    return win_txinfo_fee(m_innerPtr);
  }

  uint64_t WinTransactionInfo::blockHeight() const
  {
    return win_txinfo_blockHeight(m_innerPtr);
  }

  std::set<uint32_t> WinTransactionInfo::subaddrIndex() const
  {
    return std::set<uint32_t>();
  }

  uint32_t WinTransactionInfo::subaddrAccount() const
  {
    return 0;
  }

  std::string WinTransactionInfo::label() const
  {
    return std::string(win_txinfo_label(m_innerPtr));
  }

  uint64_t WinTransactionInfo::confirmations() const
  {
    return win_txinfo_confirmations(m_innerPtr);
  }

  uint64_t WinTransactionInfo::unlockTime() const
  {
    return win_txinfo_unlockTime(m_innerPtr);
  }

  std::string WinTransactionInfo::hash() const
  {
    return std::string(win_txinfo_hash(m_innerPtr));
  }

  std::time_t WinTransactionInfo::timestamp() const
  {
    return static_cast<std::time_t>(win_txinfo_timestamp(m_innerPtr));
  }

  std::string WinTransactionInfo::paymentId() const
  {
    return std::string(win_txinfo_paymentId(m_innerPtr));
  }

  const std::vector<Safex::TransactionInfo::Transfer> &WinTransactionInfo::transfers() const
  {
    return {};
  }

  TransactionType WinTransactionInfo::transactionType() const
  {
    return static_cast<TransactionType>(win_txinfo_transactionType(m_innerPtr));
  }


  WinTransactionHistory::~WinTransactionHistory()
  {

  }

  int WinTransactionHistory::count() const
  {
    return 0;
  }

  WinTransactionInfo *WinTransactionHistory::transaction(int index) const
  {
    return nullptr;
  }

  WinTransactionInfo *WinTransactionHistory::transaction(const std::string &id) const
  {
    return nullptr;
  }

  std::vector<WinTransactionInfo *> WinTransactionHistory::getAll() const
  {
    return std::vector<WinTransactionInfo *>();
  }

  void WinTransactionHistory::refresh()
  {

  }




  WinWallet::~WinWallet()
  {

  }

  std::string WinWallet::seed() const
  {
    return std::string(win_seed(m_innerPtr));
  }

  Wallet *WinWallet::createWallet(const std::string &path, const std::string &password, const std::string &language, NetworkType nettype)
  {
    return nullptr;
  }

  std::string WinWallet::address(uint32_t accountIndex, uint32_t addressIndex) const
  {
//    const char *value = ;
//    std::string retValue{value};
//    return retValue;
    return std::string(win_address(m_innerPtr));
  }

  std::string WinWallet::path() const
  {
    return std::string(win_path(m_innerPtr));
  }

  NetworkType WinWallet::nettype() const
  {
    return static_cast<NetworkType>(win_nettype(m_innerPtr));
  }

  std::string WinWallet::secretViewKey() const
  {
    return std::string(win_secretViewKey(m_innerPtr));
  }

  std::string WinWallet::publicViewKey() const
  {
    return std::string(win_publicViewKey(m_innerPtr));
  }

  std::string WinWallet::secretSpendKey() const
  {
    return std::string(win_secretSpendKey(m_innerPtr));
  }

  std::string WinWallet::publicSpendKey() const
  {
    return std::string(win_publicSpendKey(m_innerPtr));
  }

  bool WinWallet::setPassword(const std::string &password)
  {
    return false;
  }

  std::string WinWallet::errorString() const
  {
    return std::string(win_errorString(m_innerPtr));
  }

  bool WinWallet::init(const std::string &daemon_address, uint64_t upper_transaction_size_limit, const std::string &daemon_username, const std::string &daemon_password, bool use_ssl, bool lightWallet)
  {
    return static_cast<bool>(win_initB(m_innerPtr, daemon_address.c_str()));
  }

  bool WinWallet::store(const std::string &path)
  {
    return static_cast<bool>(win_storeB(m_innerPtr, path.c_str()));
  }

  void WinWallet::segregatePreForkOutputs(bool segregate)
  {

  }

  void WinWallet::keyReuseMitigation2(bool mitigation)
  {

  }

  uint64_t WinWallet::getRefreshFromBlockHeight() const
  {
    return 0;
  }

  bool WinWallet::trustedDaemon() const
  {
    return false;
  }

  std::string WinWallet::genPaymentId()
  {
    return std::string();
  }

  uint64_t WinWallet::daemonBlockChainHeight() const
  {
    return 0;
  }

  bool WinWallet::synchronized() const
  {
    return false;
  }

  bool WinWallet::paymentIdValid(const std::string &paiment_id)
  {
    return false;
  }

  bool WinWallet::addressValid(const std::string &str, NetworkType nettype)
  {
    return false;
  }

  uint32_t WinWallet::defaultMixin() const
  {
    return 0;
  }

  WinTransactionHistory *WinWallet::history()
  {
    return nullptr;
  }




  Safex::Wallet::ConnectionStatus WinWallet::connected() const
  {
    return Safex::Wallet::ConnectionStatus::ConnectionStatus_WrongVersion;
  }

  void WinWallet::setTrustedDaemon(bool arg)
  {
    win_setTrustedDaemon(m_innerPtr, static_cast<uint8_t>(arg));
  }

  uint64_t WinWallet::balanceAll() const
  {
    return win_balanceAll(m_innerPtr);
  }

  uint64_t WinWallet::unlockedBalanceAll() const
  {
    return win_unlockedBalanceAll(m_innerPtr);
  }

  uint64_t WinWallet::tokenBalanceAll() const
  {
    return win_tokenBalanceAll(m_innerPtr);
  }

  uint64_t WinWallet::unlockedTokenBalanceAll() const
  {
    return win_unlockedTokenBalanceAll(m_innerPtr);

  }


  void WinWallet::setDefaultMixin(uint32_t arg)
  {

  }

  std::string WinWallet::signMessage(const std::string &message)
  {
    return std::string();
  }

  int WinWallet::status() const
  {
    return 0;
  }

  bool WinWallet::verifySignedMessage(const std::string &message, const std::string &addres, const std::string &signature) const
  {
    return false;
  }

  uint64_t WinWallet::blockChainHeight() const
  {
    return 0;
  }

  void WinWallet::setListener(WinWalletListener * wltListener)
  {
    m_nativeListenerPtr = win_lstn_Create(static_cast<void *>(wltListener));
    ::win_lstn_setMoneySpent(m_nativeListenerPtr, &WinWalletListenerProxy::moneySpent);
    ::win_lstn_setMoneyReceived(m_nativeListenerPtr, &WinWalletListenerProxy::moneyReceived);
    ::win_lstn_setUnconfirmedMoneyReceived(m_nativeListenerPtr, &WinWalletListenerProxy::unconfirmedMoneyReceived);
    ::win_lstn_setTokensSpent(m_nativeListenerPtr, &WinWalletListenerProxy::tokensSpent);
    ::win_lstn_setTokenReceived(m_nativeListenerPtr, &WinWalletListenerProxy::tokensReceived);
    ::win_lstn_setUnconfirmedTokenReceived(m_nativeListenerPtr, &WinWalletListenerProxy::unconfirmedTokensReceived);
    ::win_lstn_setNewBlock(m_nativeListenerPtr, &WinWalletListenerProxy::newBlock);
    ::win_lstn_setUpdated(m_nativeListenerPtr, &WinWalletListenerProxy::updated);
    ::win_lstn_setRefreshed(m_nativeListenerPtr, &WinWalletListenerProxy::refreshed);
    ::win_SetListener(m_innerPtr, m_nativeListenerPtr);
  }

  WinPendingTransaction *WinWallet::createTransaction(const std::string &dst_addr, const std::string &payment_id, optional<uint64_t> value_amount, uint32_t mixin_count,
          PendingTransaction::Priority priority, uint32_t subaddr_account, std::set<uint32_t> subaddr_indices, const TransactionType tx_type)
  {

    std::cout << "WinWallet::createTransaction checkpoint 1" << std::endl;
    void* temp = win_createTransaction(m_innerPtr,dst_addr.c_str(), payment_id.c_str(), *value_amount, mixin_count, priority,
            0 /*subaddr_account*/, 0 /*subaddr_indices*/, static_cast<uint32_t>(tx_type));
    WinPendingTransaction *retValue = new WinPendingTransaction(temp);
    return retValue;
  }

  void WinWallet::startRefresh()
  {
    win_startRefresh(m_innerPtr);
  }

  void WinWallet::pauseRefresh()
  {

  }

  bool WinWallet::refresh()
  {
    return false;
  }

  void WinWallet::refreshAsync()
  {

  }

  void WinWallet::setRefreshFromBlockHeight(uint64_t refresh_from_block_height)
  {
    win_setRefreshFromBlockHeight(m_innerPtr, refresh_from_block_height);
  }


}
