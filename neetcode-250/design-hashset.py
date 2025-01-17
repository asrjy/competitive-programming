class MyHashSet:

    def __init__(self):
        self.to_return = []
        self.values = []

    def add(self, key: int) -> None:
        self.values.append(key)
        self.values = list(set(self.values))

    def remove(self, key: int) -> None:
        self.values = list(set(self.values))
        if key in self.values:
            self.values.remove(key)

    def contains(self, key: int) -> bool:
        if key in self.values:
            return True
        return False


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)