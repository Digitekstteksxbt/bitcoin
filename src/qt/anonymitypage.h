#ifndef ANONYMITYPAGEDIALOG_H
#define ANONYMITYPAGEDIALOG_H

class BitcoinGUI;

#include <QWidget>
#include <QTableWidget>

class AnonymityPage : public QWidget {
  Q_OBJECT

public:
  AnonymityPage(QWidget *parent);
  void UpdateTable();
  std::string selectedAddresses();
  void clearSelection();

private:
  QTableWidget *table;
  BitcoinGUI *gui;

private slots:
  void sendFromSelectedAddress(QTableWidgetItem *item);
};

#endif
