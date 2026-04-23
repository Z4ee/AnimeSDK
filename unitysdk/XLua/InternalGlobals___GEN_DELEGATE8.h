#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueMiracleInGame; }
namespace RPG::Client { class IRogueMiracleInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE8_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1122A220)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE8_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1122A2A0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE8_INVOKE_OFFSET UNITYSDK_OFFSET(0x11229C20)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE8__CTOR_OFFSET UNITYSDK_OFFSET(0x11212C00)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE8_TypeDefinitionIndex = 46334;

	class InternalGlobals___GEN_DELEGATE8 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE8__CTOR_OFFSET))(this, object, method);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>* Invoke(::RPG::Client::IRogueMiracleInfo* miracleInfo, ::RPG::GameCore::RogueMiracleCategory category, ::System::Boolean isBrokenFirst)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>*(*)(::PVOID, ::RPG::Client::IRogueMiracleInfo*, ::RPG::GameCore::RogueMiracleCategory, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE8_INVOKE_OFFSET))(this, miracleInfo, category, isBrokenFirst);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueMiracleInfo* miracleInfo, ::RPG::GameCore::RogueMiracleCategory category, ::System::Boolean isBrokenFirst, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueMiracleInfo*, ::RPG::GameCore::RogueMiracleCategory, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE8_BEGININVOKE_OFFSET))(this, miracleInfo, category, isBrokenFirst, callback, object);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE8_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
