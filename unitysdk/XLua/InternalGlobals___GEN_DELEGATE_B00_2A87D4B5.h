#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class ItemData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2A87D4B5_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DA3C40)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2A87D4B5_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DA3C70)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2A87D4B5_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DA3C30)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2A87D4B5__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA3B40)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_2A87D4B5_TypeDefinitionIndex = 50134;

	class InternalGlobals___GEN_DELEGATE_B00_2A87D4B5 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2A87D4B5__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::ItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2A87D4B5_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::ItemData* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::ItemData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2A87D4B5_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2A87D4B5_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
