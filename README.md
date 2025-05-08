# Design Patterns Project: Observer vs. Mediator Pattern in C++ Game 🎮  
A terminal-based C++ game demonstrating **Observer Pattern** and **Mediator Pattern** implementations for event-driven communication in game development.

## 🎯 Assignment Objective
Demonstrate understanding of **Observer** and **Mediator** design patterns by implementing two versions of a text-based game system where:
- A player attacks an enemy
- Multiple systems (UI, Sound, Score) respond to the attack event
- Communication is handled differently in each pattern

## 📁 Project Structure

design-patterns-game/
├── observer_version/ # Observer Pattern implementation
│ ├── main.cpp
│ ├── Player.h/.cpp
│ ├── Enemy.h/.cpp
│ ├── IObserver.h
│ ├── UI.h/.cpp
│ ├── SoundSystem.h/.cpp
│ └── ScoreSystem.h/.cpp
│
├── mediator_version/ # Mediator Pattern implementation
│ ├── main.cpp
│ ├── EventMediator.h/.cpp
│ ├── Player.h/.cpp
│ ├── Enemy.h/.cpp
│ ├── UI.h/.cpp
│ ├── SoundSystem.h/.cpp
│ └── ScoreSystem.h/.cpp
│
└── README.md # This file


## 🔍 Pattern Implementations

### 1. Observer Pattern Version  
**Pattern Used:** [Observer](https://refactoring.guru/design-patterns/observer )  
**Key Components:**
- `IObserver` - Abstract interface for all listeners
- `Player` - Subject that maintains observers and triggers events
- `UI/SoundSystem/ScoreSystem` - Concrete observers reacting to events

**Communication Flow:**


### 2. Mediator Pattern Version  
**Pattern Used:** [Mediator](https://refactoring.guru/design-patterns/mediator )  
**Key Components:**
- `EventMediator` - Central hub managing event subscriptions and broadcasting
- `Player` - Sends events to mediator
- `UI/SoundSystem/ScoreSystem` - Subscribe to events via the mediator

**Communication Flow:**