#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueMiracleInGame; }
namespace RPG::Client { class IRogueMiracleInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE7_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF5F180)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE7_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF5F1B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE7_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF5EC20)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE7__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49A30)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE7_TypeDefinitionIndex = 40424;

	class InternalGlobals___GEN_DELEGATE7 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE7__CTOR_OFFSET))(this, object, method);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>* Invoke(::RPG::Client::IRogueMiracleInfo* miracleInfo)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>*(*)(::PVOID, ::RPG::Client::IRogueMiracleInfo*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE7_INVOKE_OFFSET))(this, miracleInfo);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueMiracleInfo* miracleInfo, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueMiracleInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE7_BEGININVOKE_OFFSET))(this, miracleInfo, callback, object);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE7_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
