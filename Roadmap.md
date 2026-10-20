# C++ Simulation & Algorithms Roadmap

A step-by-step learning roadmap for two beginners who want to learn C++ by building increasingly complex, logic-heavy projects. The focus is on algorithms, data structures, simulations, and software design—not on decorative graphics.

The projects start with console applications. For early visual feedback, use **ASCII output in the terminal** or a **small, simple graphics library** only when it genuinely helps. Build and test the core logic before adding visualization.

## Roadmap at a glance

| # | Project | Main concepts | Suggested visualization |
|---:|---|---|---|
| 1 | Console fundamentals | Variables, conditions, loops, functions | Text only |
| 2 | Inventory manager *(mini-project)* | Structs, vectors, file I/O | Text menu |
| 3 | Stock and portfolio simulator | Classes, time series, calculations | Console/CSV charts |
| 4 | Maze and grid toolkit *(mini-project)* | 2D grids, coordinates, neighbors | ASCII grid |
| 5 | Pathfinding simulator | BFS, Dijkstra, A* | ASCII first; SFML optional |
| 6 | Cellular automata *(mini-project)* | State transitions, grids | ASCII first; SFML optional |
| 7 | Ecosystem simulation | Interacting agents, rules, statistics | Console or simple 2D |
| 8 | Event queue simulator *(mini-project)* | Queues, priorities, simulated time | Console event log |
| 9 | Factory and production simulation | Discrete events, bottlenecks, metrics | Console/CSV; optional 2D |
| 10 | 3D block-world data model *(mini-project)* | 3D coordinates, storage, serialization | Console |
| 11 | Voxel world | Chunks, terrain, mesh/rendering | raylib |
| 12 | Particles and collisions *(mini-project)* | Vectors, velocity, collision detection | ASCII or SFML |
| 13 | Physics simulator | Forces, integration, stability | SFML optional |
| 14 | Random experiments and statistics *(mini-project)* | Randomness, distributions, variance | Console/CSV |
| 15 | Monte Carlo strategy optimization | Repeated trials, uncertainty, optimization | CSV/Python plots |
| 16 | Road network and vehicles *(mini-project)* | Graphs, routes, vehicle state | ASCII or SFML |
| 17 | Traffic and logistics simulator | Congestion, dynamic routing, performance | SFML optional |
| 18 | Arithmetic expression parser *(mini-project)* | Tokens, parsing, recursion | Console |
| 19 | Small programming language | Lexer, parser, AST, interpreter | Console |
| 20 | Modular simulation platform | Architecture, testing, configuration | Console-first; optional GUI |

Times are estimates, not deadlines. Move on when you can explain, test, and extend the project without following a step-by-step tutorial.

---

## Phase 1 — C++ fundamentals

### 1. Console fundamentals

**What it is:** A set of small programs that read input, perform calculations, and print results. The goal is to learn how programs work before combining everything into a large application.

**Build:**
- Calculator
- Number-guessing game
- Prime-number checker
- Basic number statistics

**Learn:** Variables, data types, `if`, loops, functions, input validation, return values.

**Tools:** Visual Studio or VS Code, plus a compiler such as MSVC, GCC, or Clang.

**Libraries:** C++ standard library only.

**Prerequisites:** None.

**Done when:**
- Invalid input is handled safely.
- Logic is split into small functions.
- You can recreate each program without copying a tutorial.

**Estimated time:** 1–3 weeks.

### 2. Mini-project: Inventory manager

**What it is:** A small command-line system for managing items. Each item has fields such as an ID, name, price, and quantity.

**Build:**
- Add and remove items.
- Search and sort items.
- Change stock quantities.
- Save data to a file and load it on startup.

**Learn:** `struct`, `std::vector`, `std::string`, file I/O, functions, basic error handling.

**Tools:** Same setup as Project 1.

**Libraries:** C++ standard library; use `std::fstream` for file storage.

**Prerequisites:** Variables, loops, conditions, and functions.

**Done when:** Items can be created, searched, edited, sorted, saved, and loaded after restarting the program.

**Estimated time:** 1–2 weeks.

---

## Phase 2 — Data and simulations

### 3. Stock and portfolio simulator

**What it is:** A simulated market with generated stock prices. A user can buy and sell shares and track how a virtual portfolio changes over time. This is a simulation project, not a tool for real financial advice.

**Build:**
- Generate stock-price time series.
- Track cash, holdings, trades, and transaction fees.
- Calculate portfolio value and profit/loss.
- Run at least 1,000 time steps.
- Compare two simple trading strategies.
- Use a fixed random seed to reproduce results.

**Learn:** Classes and objects, time series, financial calculations, random-number generation, separation of model and output.

**Tools:** C++20, CMake, Git.

**Libraries:** Standard library. Export CSV for charts; Python with Matplotlib is an optional plotting tool. `matplotlib-cpp` is another option, but it requires extra setup.

**Prerequisites:** Projects 1–2, vectors, structs, functions, and file I/O.

**Done when:** Trades and fees are accounted for correctly, results can be saved, and two strategies can be compared on the same generated data.

**Estimated time:** 2–4 weeks.

### 4. Mini-project: Maze and grid toolkit

**What it is:** Represent a maze as a grid of open and blocked cells. Before implementing pathfinding, build the data model and movement rules.

**Build:**
- Create or load a grid.
- Define start and goal cells.
- Check valid neighboring cells.
- Detect boundaries and unreachable goals.
- Print the maze using ASCII characters.

**Learn:** 2D vectors/arrays, coordinates, nested loops, enums, neighbors, and basic graph concepts.

**Tools:** C++20, CMake.

**Libraries:** None required; use ASCII output in the terminal.

**Prerequisites:** Functions, loops, vectors, and basic classes or structs.

**Done when:** Grids of different sizes work, invalid moves are rejected, and the program can identify when the goal cannot be reached.

**Estimated time:** 1–2 weeks.

### 5. Pathfinding simulator

**What it is:** Find a route from a start cell to a goal. Run different algorithms on the same maze and compare their results.

**Build:**
- Breadth-first search (BFS).
- Dijkstra's algorithm.
- A* search.
- Weighted terrain and obstacles.
- Path reconstruction.
- Counters for visited nodes and execution time.

**Learn:** Graph algorithms, queues, priority queues, predecessor tracking, algorithmic complexity.

**Tools:** C++20, CMake, Git.

**Libraries:** Standard library. Start with ASCII output; use SFML only if a graphical 2D view would help.

**Prerequisites:** Project 4, grid data structures, functions, and classes.

**Done when:** Algorithms find a shortest path according to their cost model, detect unreachable goals, and can be compared using consistent test mazes.

**Estimated time:** 2–4 weeks.

---

## Phase 3 — Rules, states, and interacting systems

### 6. Mini-project: Cellular automata

**What it is:** A grid of cells changes in discrete generations according to local rules. Conway's Game of Life is a good starting example.

**Build:**
- Alive and dead cells.
- Count each cell's neighbors.
- Calculate the next generation.
- Support repeatable and random starting patterns.
- Print generations in the console.

**Learn:** State transitions, grid updates, neighbor rules, deterministic simulation steps, double buffering.

**Tools:** C++20, CMake.

**Libraries:** None required; optional SFML for 2D display.

**Prerequisites:** 2D grids, loops, functions, and data structures.

**Done when:** Each generation is computed from the previous generation, independent of cell update order.

**Estimated time:** 1–2 weeks.

### 7. Ecosystem simulation

**What it is:** Simulate a simple ecosystem where plants grow, prey search for food, and predators hunt prey.

**Build:**
- Plants, prey, and predators.
- Energy, movement, reproduction, and death.
- Rules for eating and resource use.
- Population statistics over many generations.
- Configurable starting populations and parameters.

**Learn:** Interacting state machines, object-oriented design, randomness, simulation ordering, and statistics.

**Tools:** C++20, CMake.

**Libraries:** Standard library; optional SFML for a simple 2D view.

**Prerequisites:** Project 6, classes, vectors, and functions.

**Done when:** The simulation records births, deaths, and population sizes, and you can explain how changing one parameter affects the ecosystem.

**Estimated time:** 2–3 weeks.

### 8. Mini-project: Event queue and service line

**What it is:** Simulate a service desk where jobs or customers arrive, wait, and are processed. The simulation advances from event to event rather than checking every possible moment.

**Build:**
- Arrival, start-of-service, and completion events.
- A waiting queue.
- Event timestamps.
- Average waiting time and throughput.
- A readable event log.

**Learn:** `std::queue`, `std::priority_queue`, event ordering, simulated time, basic statistics.

**Tools:** C++20, CMake.

**Libraries:** Standard library only.

**Prerequisites:** Classes, structs, vectors, and basic algorithms.

**Done when:** Events are processed in chronological order and the program calculates average wait time, throughput, and resource utilization.

**Estimated time:** 1–2 weeks.

### 9. Factory and production simulation

**What it is:** A factory contains multiple machines and stations. Jobs move between them, creating queues, delays, machine downtime, and bottlenecks.

**Build:**
- At least three machines or stations.
- Jobs with processing times.
- Queues between machines.
- Machine breakdowns and repair events.
- Throughput, idle time, and utilization metrics.
- CSV output for later analysis.

**Learn:** Discrete-event simulation, resource allocation, interacting objects, bottleneck analysis, and metrics.

**Tools:** C++20, CMake, Git.

**Libraries:** Standard library; optional SFML for a simple overview, and CSV/Python/Matplotlib for charts.

**Prerequisites:** Project 8, classes, queues, and event processing.

**Done when:** Jobs flow through multiple machines, downtime is handled, and the program identifies the busiest or most restrictive station.

**Estimated time:** 2–4 weeks.

---

## Phase 4 — 3D data and physical movement

### 10. Mini-project: 3D block-world data model

**What it is:** Store a small three-dimensional world made of blocks. Build the data model first; do not start with 3D rendering.

**Build:**
- 3D coordinates and block types.
- Add and remove blocks.
- Check neighboring blocks.
- Save and load a world.
- Test a world such as `32 × 32 × 32` blocks.

**Learn:** 3D indexing, storage layout, memory use, serialization, and boundary checks.

**Tools:** C++20, CMake.

**Libraries:** Standard library only.

**Prerequisites:** Grid concepts, classes, and file I/O.

**Done when:** A world can be generated, edited, saved, loaded, and verified to contain the same data afterward.

**Estimated time:** 1–2 weeks.

### 11. Voxel world

**What it is:** Turn the block-world data model into a small 3D world with generated terrain and editable blocks.

**Build:**
- Terrain generation.
- Chunk-based storage, for example `16 × 16 × 16` blocks per chunk.
- Camera controls.
- Block editing.
- Render only visible block faces where practical.
- Save and load the world.

**Learn:** 3D coordinates, meshes, rendering, chunk boundaries, and performance.

**Tools:** C++20, CMake.

**Libraries:** raylib for accessible 3D rendering; FastNoise Lite is optional for terrain generation.

**Prerequisites:** Project 10, classes, vectors, and basic 3D coordinate concepts.

**Done when:** Multiple chunks can be generated and edited, and rendering avoids drawing every hidden face.

**Scope limit:** Start with a small world and a few block types. Do not attempt a full Minecraft clone.

**Estimated time:** 3–6 weeks.

### 12. Mini-project: Particles and collisions

**What it is:** Circles or particles move inside a bounded space and collide with walls and one another.

**Build:**
- Position, velocity, and acceleration.
- Wall collisions.
- Basic particle-particle collision detection.
- A configurable number of particles.
- A simple way to observe the simulation.

**Learn:** Vector math, time steps, collision detection, and separation of simulation logic from drawing.

**Tools:** C++20, CMake.

**Libraries:** Start with text-based diagnostics; use SFML for 2D rendering if needed.

**Prerequisites:** Classes, loops, functions, and basic math.

**Done when:** Particles move and bounce, and collisions do not routinely cause objects to pass through each other or become unstable.

**Estimated time:** 1–2 weeks.

### 13. Physics simulator

**What it is:** Extend the particle model with physical forces such as gravity, friction, and momentum.

**Build:**
- Gravity and external forces.
- Mass and momentum.
- Collisions.
- A fixed simulation time step.
- Optional springs.
- Stability tests with different time steps.

**Learn:** Numerical integration, physical modeling, energy, and numerical stability.

**Tools:** C++20, CMake.

**Libraries:** SFML optional for visualization; Google Benchmark optional for performance measurements.

**Prerequisites:** Project 12, vector math, and basic physics.

**Done when:** At least 1,000 particles can be simulated and you can investigate how the time step affects stability and accuracy.

**Estimated time:** 2–4 weeks.

---

## Phase 5 — Randomness, statistics, and optimization

### 14. Mini-project: Random experiments and statistics

**What it is:** Run simple random experiments many times and analyze how much the results vary.

**Build:**
- Coin and dice experiments.
- Frequency distributions.
- Mean, variance, and percentiles.
- Reproducible random seeds.
- Results for at least 100,000 trials.

**Learn:** Random-number generators, statistical summaries, distributions, and repeatable experiments.

**Tools:** C++20, CMake.

**Libraries:** Standard library; Python with Matplotlib is optional for charts.

**Prerequisites:** Loops, functions, vectors, and basic percentages.

**Done when:** You can compare observed results with theoretical expectations and explain why individual runs differ.

**Estimated time:** 1–2 weeks.

### 15. Monte Carlo and strategy optimization

**What it is:** Test different decision strategies across many randomly generated scenarios. For example, compare trading rules or resource-allocation strategies.

**Build:**
- At least 100,000 simulation runs.
- Several strategies and configurable parameters.
- Reproducible experiments.
- Outcome distributions, variance, and percentiles.
- Confidence intervals where appropriate.
- Parameter comparisons.

**Learn:** Statistical uncertainty, experiment design, optimization, and performance measurement.

**Tools:** C++20, CMake.

**Libraries:** Standard library; CSV plus Python/Matplotlib, or optionally `matplotlib-cpp`; Google Benchmark optional.

**Prerequisites:** Projects 3 and 14, random-number generation, and basic statistics.

**Done when:** Strategies are compared across the same conditions and the report includes risk and variability—not just the best single result.

**Estimated time:** 2–4 weeks.

---

## Phase 6 — Connected systems

### 16. Mini-project: Road network and vehicles

**What it is:** Represent a road network as a graph. Intersections are nodes, roads are edges, and vehicles travel from a start point to a destination.

**Build:**
- A road graph.
- Vehicles with start and destination.
- Route calculation.
- Vehicle positions and occupied road segments.
- Basic handling of blocked roads.

**Learn:** Graphs, pathfinding, object states, and resource occupancy.

**Tools:** C++20, CMake.

**Libraries:** Standard library; optional SFML for a simple map.

**Prerequisites:** Project 5 and basic classes.

**Done when:** Many vehicles receive routes and update their positions without crossing blocked road segments.

**Estimated time:** 1–2 weeks.

### 17. Traffic and logistics simulator

**What it is:** Expand the road network into a dynamic traffic system. Vehicles affect one another, congestion develops, and routes may need to change.

**Build:**
- Vehicle movement and traffic density.
- Congestion and blocked segments.
- Alternative routes.
- At least two traffic or routing strategies.
- Travel-time and throughput measurements.
- A test with at least 1,000 vehicles.

**Learn:** Agent interactions, dynamic graphs, simulation timing, optimization, and performance profiling.

**Tools:** C++20, CMake, Git.

**Libraries:** Standard library; optional SFML, Google Benchmark, and CSV/Python/Matplotlib.

**Prerequisites:** Project 16, pathfinding, and event processing.

**Done when:** You can compare strategies using travel time and throughput, and explain where bottlenecks occur.

**Estimated time:** 3–5 weeks.

---

## Phase 7 — Language tools and software architecture

### 18. Mini-project: Arithmetic expression parser

**What it is:** Build a calculator that understands expressions such as `2 + 3 * (4 - 1)`, rather than treating the input as an ordinary string.

**Build:**
- Numbers and parentheses.
- `+`, `-`, `*`, and `/`.
- Operator precedence.
- Syntax validation and useful errors.
- Optional abstract syntax tree output.

**Learn:** Tokenization, parsing, recursion, syntax rules, and error handling.

**Tools:** C++20, CMake.

**Libraries:** None required; Graphviz is optional for visualizing a syntax tree.

**Prerequisites:** Functions, classes, strings, and recursion.

**Done when:** Expressions are evaluated with correct precedence and malformed expressions produce understandable errors.

**Estimated time:** 1–2 weeks.

### 19. Small programming language

**What it is:** Build a small interpreted language. Users write programs in your language, and your interpreter parses and executes them.

**Build:**
- Variables and values.
- Expressions and assignments.
- `if` statements and loops.
- Functions and local variables.
- Runtime and syntax error reporting.
- Automated tests.

**Learn:** Lexer, parser, abstract syntax tree (AST), runtime environment, scope, and modular design.

**Tools:** C++20, CMake, Git.

**Libraries:** Standard library; Catch2 or GoogleTest for tests, Graphviz optional for AST diagrams.

**Prerequisites:** Project 18, recursion, classes, containers, and module separation.

**Done when:** A program like this prints `55`:

```text
let x = 10;
let sum = 0;

while (x > 0) {
    sum = sum + x;
    x = x - 1;
}

print(sum);
```

The interpreter should also report unknown variables, syntax errors, and invalid expressions.

**Estimated time:** 4–8 weeks or more.

### 20. Modular simulation platform

**What it is:** Build a shared framework that can run several different simulations instead of a single standalone model.

**Build:**
- A common simulation interface.
- Configurable runs.
- Reproducible random seeds.
- Logging and result export.
- Automated tests and benchmarks.
- At least three models, such as stock, factory, and traffic simulations.

**Learn:** Software architecture, interfaces, dependencies, testing, profiling, and maintainability.

**Tools:** C++20, CMake, Git.

**Libraries:** Catch2 or GoogleTest, Google Benchmark; SFML optional for visualization.

**Prerequisites:** Several completed projects, classes, file handling, and testing experience.

**Done when:** Three different models can be started and configured through the same application, with consistent logs and results.

**Estimated time:** 4–8 weeks or more.

---

## Shared development setup

You do not need to install every library at the start. Keep the base setup small and add dependencies only when a project needs them.

| Tool | Purpose | When to introduce it |
|---|---|---|
| Visual Studio or VS Code | Editing and debugging | Project 1 |
| MSVC, GCC, or Clang | C++ compiler | Project 1 |
| Git | Version control and collaboration | Projects 1–2 |
| CMake | Build configuration | Project 3 |
| SFML | Simple 2D graphics | When ASCII output is no longer enough |
| raylib | Accessible 3D graphics | Project 11 |
| Catch2 or GoogleTest | Automated tests | Around Project 5 |
| Python + Matplotlib | Plot CSV results | When data visualization becomes useful |
| Google Benchmark | Repeatable performance benchmarks | Larger simulations |

## Recommended development approach

1. **Build the core logic first.** The simulation should work without graphics.
2. **Start with ASCII output.** A grid, event log, or simple status report is often enough.
3. **Add a simple graphics library only when useful.** Prefer visualization as a separate layer, not mixed into the simulation rules.
4. **Test edge cases.** Include invalid input, empty data, boundaries, unreachable goals, and extreme parameter values.
5. **Use Git from the beginning.** Work on branches and review each other's changes.
6. **Keep projects small enough to finish.** Add optional features only after the core acceptance criteria pass.

## Pair-programming workflow

For each task, one person can implement a small piece while the other designs test cases and reviews the behavior. Swap roles regularly. Agree on interfaces before splitting work, and integrate changes frequently.

## Project completion checklist

Before moving on, make sure:

- [ ] The project builds from a clean checkout.
- [ ] Core features work for normal and invalid inputs.
- [ ] Both contributors can explain the important parts of the code.
- [ ] At least five meaningful test cases have been run.
- [ ] You can extend the project with one small feature without a tutorial.
- [ ] The repository includes a README with build and run instructions.

**Guiding principle:** A correct pathfinding algorithm in the terminal is already a successful project. Visualization is an enhancement, not a prerequisite.
