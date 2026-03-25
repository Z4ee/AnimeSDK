#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class RogueTournDifficultyCompData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE34_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF55620)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE34_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF55650)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE34_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF550C0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE34__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49B30)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE34_TypeDefinitionIndex = 40451;

	class InternalGlobals___GEN_DELEGATE34 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE34__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournDifficultyCompData*>* diffComps)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournDifficultyCompData*>*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE34_INVOKE_OFFSET))(this, diffComps);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournDifficultyCompData*>* diffComps, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournDifficultyCompData*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE34_BEGININVOKE_OFFSET))(this, diffComps, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE34_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
