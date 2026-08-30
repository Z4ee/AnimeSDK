#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournGameLevelLayerLinear; }
namespace RPG::Client { class IRogueTournGameLevelLinear; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B46CDB98_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11856900)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B46CDB98_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11856930)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B46CDB98_INVOKE_OFFSET UNITYSDK_OFFSET(0x118568F0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B46CDB98__CTOR_OFFSET UNITYSDK_OFFSET(0x11856800)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_B46CDB98_TypeDefinitionIndex = 50491;

	class InternalGlobals___GEN_DELEGATE_B00_B46CDB98 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B46CDB98__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayerLinear*>* Invoke(::RPG::Client::IRogueTournGameLevelLinear* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayerLinear*>*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLinear*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B46CDB98_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournGameLevelLinear* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLinear*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B46CDB98_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayerLinear*>* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayerLinear*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B46CDB98_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
