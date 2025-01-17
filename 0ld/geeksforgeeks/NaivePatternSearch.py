{
import atexit
import io
import sys
_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER
@atexit.register
def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        s=str(input())
        p=str(input())
        if(search(p,s)):
            print("Yes")
        else:
            print("No")
}
def search(p,s):
    p_length = len(p)
    if ( s[-p_length:] == p):
            return 1
    for i in range(len(s)-4):
        if ( s[i:i+p_length] == p ):
            return 1
        
    return 0
