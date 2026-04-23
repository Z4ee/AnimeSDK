#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournGameLevelLayerLinear; }
namespace RPG::Client { class IRogueTournGameLevelRoomLinear; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE28_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1121C080)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE28_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1121C0B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE28_INVOKE_OFFSET UNITYSDK_OFFSET(0x1121BB20)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE28__CTOR_OFFSET UNITYSDK_OFFSET(0x11212EA0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE28_TypeDefinitionIndex = 46354;

	class InternalGlobals___GEN_DELEGATE28 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE28__CTOR_OFFSET))(this, object, method);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelRoomLinear*>* Invoke(::RPG::Client::IRogueTournGameLevelLayerLinear* layer)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelRoomLinear*>*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLayerLinear*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE28_INVOKE_OFFSET))(this, layer);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournGameLevelLayerLinear* layer, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLayerLinear*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE28_BEGININVOKE_OFFSET))(this, layer, callback, object);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelRoomLinear*>* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelRoomLinear*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE28_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
