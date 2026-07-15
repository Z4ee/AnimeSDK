#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_A891C8E0D74F1DB9;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE49_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10BDDA90)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE49_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10BDDAF0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE49_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BDDA80)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE49__CTOR_OFFSET UNITYSDK_OFFSET(0x10BDD990)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE49_TypeDefinitionIndex = 47930;

	class InternalGlobals___GEN_DELEGATE49 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE49__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::Class_1_A891C8E0D74F1DB9*>* a1, ::RPG::GameCore::TurnState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A891C8E0D74F1DB9*>*, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE49_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::Class_1_A891C8E0D74F1DB9*>* a1, ::RPG::GameCore::TurnState a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A891C8E0D74F1DB9*>*, ::RPG::GameCore::TurnState, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE49_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE49_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
