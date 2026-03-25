#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE33_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF55080)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE33_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF550B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE33_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF54B30)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE33__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49D90)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE33_TypeDefinitionIndex = 40450;

	class InternalGlobals___GEN_DELEGATE33 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE33__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Collections::Generic::ICollection_1<::RPG::Client::RogueTournBuildRefTeamData*>* teams)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::RogueTournBuildRefTeamData*>*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE33_INVOKE_OFFSET))(this, teams);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::ICollection_1<::RPG::Client::RogueTournBuildRefTeamData*>* teams, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::RogueTournBuildRefTeamData*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE33_BEGININVOKE_OFFSET))(this, teams, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE33_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
