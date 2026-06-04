#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE33_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12E889C0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE33_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12E889F0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE33_INVOKE_OFFSET UNITYSDK_OFFSET(0x12E889B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE33__CTOR_OFFSET UNITYSDK_OFFSET(0x12E888C0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE33_TypeDefinitionIndex = 46949;

	class InternalGlobals___GEN_DELEGATE33 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE33__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Collections::Generic::ICollection_1<::RPG::Client::RogueTournBuildRefTeamData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::RogueTournBuildRefTeamData*>*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE33_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::ICollection_1<::RPG::Client::RogueTournBuildRefTeamData*>* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::RogueTournBuildRefTeamData*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE33_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE33_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
