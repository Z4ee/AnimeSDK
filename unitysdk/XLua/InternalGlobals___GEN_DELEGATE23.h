#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournGameLevelLayerLinear; }
namespace RPG::Client { class IRogueTournGameLevelLinear; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE23_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1121A3F0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE23_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1121A420)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE23_INVOKE_OFFSET UNITYSDK_OFFSET(0x11219E90)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE23__CTOR_OFFSET UNITYSDK_OFFSET(0x11212E00)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE23_TypeDefinitionIndex = 46349;

	class InternalGlobals___GEN_DELEGATE23 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE23__CTOR_OFFSET))(this, object, method);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayerLinear*>* Invoke(::RPG::Client::IRogueTournGameLevelLinear* level)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayerLinear*>*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLinear*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE23_INVOKE_OFFSET))(this, level);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournGameLevelLinear* level, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLinear*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE23_BEGININVOKE_OFFSET))(this, level, callback, object);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayerLinear*>* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayerLinear*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE23_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
