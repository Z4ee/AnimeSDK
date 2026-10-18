#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1F088D16_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DAEF30)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1F088D16_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DAEFA0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1F088D16_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DAEF00)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1F088D16__CTOR_OFFSET UNITYSDK_OFFSET(0x14DAEE90)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_1F088D16_TypeDefinitionIndex = 50143;

	class InternalGlobals___GEN_DELEGATE_B00_1F088D16 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1F088D16__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::Pet::BlindBox::BlindBoxPetType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::BlindBox::BlindBoxPetType))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1F088D16_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::Pet::BlindBox::BlindBoxPetType a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::Pet::BlindBox::BlindBoxPetType, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1F088D16_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1F088D16_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
