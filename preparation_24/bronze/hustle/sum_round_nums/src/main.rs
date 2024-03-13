use std::io;

fn main() {
    let mut tests = String::new();
    io::stdin()
        .read_line(&mut tests)
        .expect("failed to read input!");

    let mut t: i32 = tests.trim().parse().expect("Invalid Input");

    loop {
        if t == 0 {
            break;
        }
        let mut num = String::new();
        io::stdin()
            .read_line(&mut num)
            .expect("failed to read testcase");

        let mut ans: Vec<String> = Vec::new();
        let num_v: Vec<char> = num.trim().chars().collect();
        let sz: usize = num_v.len();
        for c in 0..sz {
            let mut res = String::from("");
            if num_v[c] != '0' {
                res.push(num_v[c]);
                for _ in c + 1..sz {
                    res.push('0');
                }
                ans.push(res);
            }
        }
        println!("{}", ans.len());
        for i in ans.iter_mut() {
            print!("{} ", i);
        }
        t -= 1;
        print!("\n")
    }
}
