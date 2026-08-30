#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class RogueTournAreaGroupData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_58BAED12_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12B22010)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_58BAED12_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12B22040)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_58BAED12_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B22000)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_58BAED12__CTOR_OFFSET UNITYSDK_OFFSET(0x12B21F10)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_58BAED12_TypeDefinitionIndex = 50506;

	class InternalGlobals___GEN_DELEGATE_B00_58BAED12 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_58BAED12__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::RogueTournAreaGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournAreaGroupData*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_58BAED12_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::RogueTournAreaGroupData* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::RogueTournAreaGroupData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_58BAED12_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_58BAED12_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
