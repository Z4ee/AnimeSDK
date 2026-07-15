#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class RogueTournDifficultyCompData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE14_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11CE8680)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE14_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11CE86B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE14_INVOKE_OFFSET UNITYSDK_OFFSET(0x11CE8670)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE14__CTOR_OFFSET UNITYSDK_OFFSET(0x11CE8580)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE14_TypeDefinitionIndex = 47895;

	class InternalGlobals___GEN_DELEGATE14 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE14__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournDifficultyCompData*>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournDifficultyCompData*>*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE14_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournDifficultyCompData*>* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournDifficultyCompData*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE14_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE14_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
