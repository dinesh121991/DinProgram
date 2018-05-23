#!/bin/python
import random
class Card:
	""" Card class object with 
	object attributes: rank, suit 
	class attributes : rank_names, suit_names """
	rank_names = [None,"1","2","3","4","5","6","7","8","9","10",
			"Jack","Queen","King"];
	suit_names = ["club","spade","diamond","heart"];
	def __init__(self, rank = 1, suite=0):
		self.rank = rank
		self.suite = suite
	def __str__(self):
		return "%s of %s"%(Card.rank_names[self.rank],Card.suit_names[self.suite])
	def __lt__(self, other):
		if self.suite < other.suite: return True
		if self.suite > other.suite: return False	
		# suits are the same, then check ranks
		return self.rank < other.rank
class Deck:
	""" Deck class object with
	object attributes: 52 cards """
	def __init__(self):
		self.cards = []
		print Card.suit_names
		print Card.rank_names
		for suit in range(4):
			for rank in range(1,14):
				card = Card(rank, suit)
				self.cards.append(card)
	def __str__(self):
		res = []
		for card in self.cards:
			res.append(str(card))
		return '\n'.join(res)
	def shuffle(self):
		random.shuffle(self.cards)
	def sort(self):
		res = self
		res.cards.sort()
		return res
card = Card(12,3);
#print(card)
card = Card(2,3);
#print(card)
deck = Deck()
#print(deck)
deck.shuffle()
print(deck)
print("======================")
re = deck.sort()
print(re)
