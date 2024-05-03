use std::io;

fn main() {
    let mut adj: Vec<Vec<i32>> = Vec::new();

    let mut cities_roads = String::new();
    io::stdin()
        .read_line(&mut cities_roads)
        .expect("failed to read input");

    let mut vi: Vec<i32> = cities_roads
        .trim()
        .split_whitespace()
        .map(|x| x.parse().expect("invalid input"))
        .collect();

    for _ in 0..vi[1] {
        cities_roads = String::new();
        io::stdin()
            .read_line(&mut cities_roads)
            .expect("failed to read input");
        vi = cities_roads
            .trim()
            .split_whitespace()
            .map(|x| x.parse().expect("invalid input"))
            .collect();
        adj[vi[0] as usize].push(vi[1]);
        adj[vi[1] as usize].push(vi[0]);
    }

    for i in adj.iter() {
        for &k in i {
            print!("{k} ");
        }
        println!();
    }
}
