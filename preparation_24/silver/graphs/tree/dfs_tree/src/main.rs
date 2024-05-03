fn dfs(s: usize, prev: i32, adj: &Vec<Vec<i32>>) {
    for &u in &adj[s] {
        if u != prev {
            dfs(u as usize, prev, adj);
        }
    }
}

fn main() {
    let adj: Vec<Vec<i32>> = Vec::new();
    dfs(1, 0, &adj);
}
