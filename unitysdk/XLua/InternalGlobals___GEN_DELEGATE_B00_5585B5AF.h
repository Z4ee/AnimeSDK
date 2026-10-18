#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_5585B5AF_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DA5050)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_5585B5AF_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DA50A0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_5585B5AF_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DA5020)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_5585B5AF__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA4FB0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_5585B5AF_TypeDefinitionIndex = 50163;

	class InternalGlobals___GEN_DELEGATE_B00_5585B5AF : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_5585B5AF__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::Pet::PetInstanceIdentifier a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::PetInstanceIdentifier))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_5585B5AF_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::Pet::PetInstanceIdentifier a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::Pet::PetInstanceIdentifier, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_5585B5AF_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_5585B5AF_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
