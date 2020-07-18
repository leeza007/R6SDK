namespace offsets {

	namespace Manager {
		extern DWORD GameManager;
	}
	
	namespace GameManager {
		extern DWORD Entlist;
		extern uintptr_t decryptionkey_entlist;
	}

	namespace Entity {
		extern DWORD entity_from_pawn;
		extern DWORD maincomp;
		extern DWORD pawn;
		extern DWORD info;
		extern DWORD weapon;
		extern uintptr_t decryptionkey_pawn;
		extern uintptr_t decryptionkey_main_component;

		namespace ninfo {
			extern DWORD team;
			extern DWORD CTU;
			extern DWORD OP;
		}

		namespace nweapon {
			extern DWORD currweapon;
			extern DWORD weaponinfo;
			extern uintptr_t decryptionkey_weaponinfo;
			extern DWORD firetype;
			extern DWORD ammo;
			extern DWORD reserved;
		}

		namespace npawn {
			extern DWORD skeleton;
		}

	}
}