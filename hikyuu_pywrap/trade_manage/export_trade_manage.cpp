/*
 *  Copyright (c) hikyuu.org
 *
 *  Created on: 2020-6-10
 *      Author: fasiondog
 */

#include <pybind11/pybind11.h>

namespace py = pybind11;

void export_BorrowRecord(py::module& m);
void export_CostRecord(py::module& m);
void export_FundsRecord(py::module& m);
void export_LoanRecord(py::module& m);
void export_PositionRecord(py::module& m);
void export_OrderBroker(py::module& m);
void export_TradeRecord(py::module& m);
void export_TradeCost(py::module& m);
void export_TradeManager(py::module& m);
void export_Performance(py::module& m);
void export_trade_manage_buildin(py::module& m);

void export_trade_manage(py::module& m) {
    export_BorrowRecord(m);
    export_CostRecord(m);
    export_FundsRecord(m);
    export_LoanRecord(m);
    export_PositionRecord(m);
    export_TradeRecord(m);

    export_OrderBroker(m);
    export_TradeCost(m);
    export_TradeManager(m);

    export_Performance(m);

    export_trade_manage_buildin(m);
}