## I really enjoyed this problem, as it's my first time using a custom STRUCT in C++ when doing CP.
```cpp
struct cell
{
    int x;
    int y;

    // Overloading the less than operator for comparing cells
    bool operator<(const cell& other) const
    {
        // Compare x-coordinates first
        if (x != other.x)
            return x < other.x;
        // If x-coordinates are equal, compare y-coordinates
        return y < other.y;
    }
};

```
## Tips:
<p>It's primordial to implement the "lessthan" function when it come defining struct to allow maps and other DS to sort (&& store) the element .. Otherwise g++ is going to give us an error!</p>
