#include "ContaBancaria.hpp"

ContaBancaria::ContaBancaria(std::string titular, double saldo) : _titular(titular), _saldo(saldo) {}

void ContaBancaria::depositar(double valor) {
    if (valor > 0) {
        this->_saldo += valor;
        std::cout << "Depósito de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout << "Valor de depósito inválido.\n";
    }
}

void ContaBancaria::sacar(double valor) {
    if (valor > 0 && valor <= this->_saldo) {
        this->_saldo -= valor;
        std::cout << "Saque de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente.\n";
    }
}

std::string ContaBancaria::getTitular() const {
    return this->_titular;
}

double ContaBancaria::getSaldo() const {
    return this->_saldo;
}
