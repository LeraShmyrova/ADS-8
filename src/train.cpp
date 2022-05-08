// Copyright 2021 NNTU-CS
#include "train.h"

Train::Train() : cOp(0), fir(nullptr) {}
  void Train::addCage(bool ligh) {
  Cage* ca = new Cage;
  ca->ligh = ligh;
  if (!fir) {
  ca->next = ca;
  ca->prev = ca;
  fir = ca;
  return;
  }
  Cage* ca = new Cage;
  ca->ligh = ligh;
  if (!fir) {
  ca->next = ca;
  ca->prev = ca;
  fir = ca;
  return;
  }
  
  int Train::getLength() {
  int trainLen = 0;
  int len = 0;
  cOp = 0;
  Cage* ct = fir;
  fir->ligh = true;
  while (true) {
  len++;
  cOp++;
  ct = ct->next;
  if (ct->light) {
  ct->ligh = false;
  trainLen = len;
  for (trainLen; trainLen > 0; --trainLen) {
  ct = ct->prev;
  cOp++;
  }
  if (!(ct->ligh)) {
  return len;
  }
  len = trainLen;
  }
  }
  }
  int Train::getOpCount() {
  return cOp;
  }
