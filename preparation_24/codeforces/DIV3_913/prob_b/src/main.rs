use std::{collections::VecDeque, i32, io, usize};

fn main() {
    let mut tests = String::new();
    io::stdin()
        .read_line(&mut tests)
        .expect("failed to read input");
    let mut t: i32 = tests.trim().parse().expect("invalid input");
    while t > 0 {
        let mut v: Vec<(char, i32)> = Vec::new();
        let mut up: VecDeque<(char, i32)> = VecDeque::new();
        let mut dw: VecDeque<(char, i32)> = VecDeque::new();
        let mut s = String::new();
        io::stdin().read_line(&mut s).expect("failed to read input");
        let v_c: Vec<char> = s.trim().chars().collect();
        for i in 0..v_c.len() {
            if v_c[i as usize] == 'B' {
                up.pop_back();
            } else if v_c[i as usize] == 'b' {
                dw.pop_back();
            } else {
                if v_c[i as usize].is_uppercase() {
                    up.push_back((v_c[i as usize], i as i32));
                } else {
                    dw.push_back((v_c[i as usize], i as i32));
                }
            }
        }
        for &i in up.iter() {
            v.push(i);
        }
        for &i in dw.iter() {
            v.push(i);
        }
        v.sort_by(|a, b| a.1.cmp(&b.1));
        for el in v.iter() {
            print!("{}", el.0);
        }
        println!();
        t -= 1;
    }
}
