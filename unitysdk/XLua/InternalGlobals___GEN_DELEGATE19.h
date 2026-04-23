#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournDifficultyWithDifficultyComp; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE19_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11218770)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE19_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x112187A0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE19_INVOKE_OFFSET UNITYSDK_OFFSET(0x11218210)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE19__CTOR_OFFSET UNITYSDK_OFFSET(0x11212D80)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE19_TypeDefinitionIndex = 46345;

	class InternalGlobals___GEN_DELEGATE19 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE19__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::RPG::Client::IRogueTournDifficultyWithDifficultyComp* difficulty)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournDifficultyWithDifficultyComp*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE19_INVOKE_OFFSET))(this, difficulty);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournDifficultyWithDifficultyComp* difficulty, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournDifficultyWithDifficultyComp*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE19_BEGININVOKE_OFFSET))(this, difficulty, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE19_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
