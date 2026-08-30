#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class RogueTournDifficultyCompData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2465DBEC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12B210B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2465DBEC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12B210E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2465DBEC_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B210A0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2465DBEC__CTOR_OFFSET UNITYSDK_OFFSET(0x12B20FB0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_2465DBEC_TypeDefinitionIndex = 50528;

	class InternalGlobals___GEN_DELEGATE_B00_2465DBEC : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2465DBEC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournDifficultyCompData*>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournDifficultyCompData*>*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2465DBEC_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournDifficultyCompData*>* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournDifficultyCompData*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2465DBEC_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2465DBEC_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
