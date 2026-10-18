#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class PetItemData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F898EF2F_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DAA210)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F898EF2F_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DAA240)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F898EF2F_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DAA200)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F898EF2F__CTOR_OFFSET UNITYSDK_OFFSET(0x14DAA190)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_F898EF2F_TypeDefinitionIndex = 50172;

	class InternalGlobals___GEN_DELEGATE_B00_F898EF2F : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F898EF2F__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::PetItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PetItemData*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F898EF2F_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::PetItemData* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::PetItemData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F898EF2F_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F898EF2F_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
