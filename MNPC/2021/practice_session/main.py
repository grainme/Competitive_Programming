T = int(input())

for _ in range(T):
    A = int(input())
    a = input().split()
    M = int(input())
    m = input().split()
    
    result = "NO"
    
    for x in a:
        a_s, a_e = x.split("-")
        a_sh, a_sm = map(int, a_s.split(":"))
        a_eh, a_em = map(int, a_e.split(":"))
        a_s_m = a_sh * 60 + a_sm
        a_e_m = a_eh * 60 + a_em
        
        for y in m:
            m_s, m_e = y.split("-")
            m_sh, m_sm = map(int, m_s.split(":"))
            m_eh, m_em = map(int, m_e.split(":"))
            m_s_m = m_sh * 60 + m_sm
            m_e_m = m_eh * 60 + m_em
            
            if max(a_s_m, m_s_m) < min(a_e_m, m_e_m):
                result = "YES"
                break
        if result == "YES":
            break
    
    print(result)
