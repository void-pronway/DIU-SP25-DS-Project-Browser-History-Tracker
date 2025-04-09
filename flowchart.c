

                                                                  DONT RUN THIS FILE
Start
│
├─▶ Initialize Program (start())
│    │
│    ├─▶ Display ByteSurf Logo
│    └─▶ Show Loading Animation
│
│
│
└─▶ Main Loop:
     │
     ├─▶ Display Home Page (homePage())
     │    │
     │    ├─▶ Show Quick Access Options (FB, BLC, DIU, CF)
     │    │
     │    └─▶ Get User Choice:
     │         │
     │         ├─1─▶ Search Page (searchPage()) ──┐
     │         │    │                             │
     │         │    └─▶ Check URL and Redirect:   │
     │         │         │                        │
     │         │         ├─"diu.edu.bd"───▶ DIU Page
     │         │         ├─"elearn..."───▶ BLC Page
     │         │         ├─"codeforces"──▶ CF Page
     │         │         ├─"facebook"────▶ FB Page
     │         │         ├─"youtube"─────▶ YT Page
     │         │         ├─"x.com"───────▶ X Page
     │         │         ├─"gmail.com"───▶ Gmail Page
     │         │         └─Invalid───────▶ Error Page
     │         │
     │         ├─2─▶ Facebook Page (fb())
     │         ├─3─▶ BLC Page (blc())
     │         ├─4─▶ DIU Page (diu())
     │         ├─5─▶ Codeforces Page (cf())
     │         ├─6─▶ Menu Page (menuPage()) ────────┐
     │         │                                    │
     │         └─Invalid───▶ Error Page             │
     │                                              │
     └─▶ Ask "Continue to HomePage? (y/n)"          │
          │                                         │
          ├─y─▶ Loop Back                           │
          └─n─▶ End Program (end())                 │
               │                                    │
               ├─▶ Show Saving Animation            │
               └─▶ Display Goodbye Message          │
                                                    │
Menu Page Logic: ◀──────────────────────────────────┘
│
├─1─▶ Return to Home Page (homePage())
│
├─2─▶ All History (allHistory())
│    │
│    ├─▶ Display History Records
│    └─▶ Press any key → Menu Page
│
├─3─▶ Delete All History (deleteAllHistory())
│    │
│    ├─▶ Show Purge Animation
│    └─▶ Press any key → Menu Page
│
├─4─▶ Search History (searchHistory())
│    │
│    ├─▶ Display Search Interface
│    └─▶ [Implementation Pending]
│
└─Invalid───▶ Error Page → Menu Page
