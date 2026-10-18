#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client::Pet { class IPetInstanceRepository; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_67AD3368_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DA5AF0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_67AD3368_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DA5B70)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_67AD3368_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DA5AE0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_67AD3368__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA59F0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_67AD3368_TypeDefinitionIndex = 50158;

	class InternalGlobals___GEN_DELEGATE_B00_67AD3368 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_67AD3368__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::RPG::Client::Pet::IPetInstanceRepository* a1, ::RPG::Client::Pet::PetIdentifier a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Pet::IPetInstanceRepository*, ::RPG::Client::Pet::PetIdentifier))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_67AD3368_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::Pet::IPetInstanceRepository* a1, ::RPG::Client::Pet::PetIdentifier a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::Pet::IPetInstanceRepository*, ::RPG::Client::Pet::PetIdentifier, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_67AD3368_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_67AD3368_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
