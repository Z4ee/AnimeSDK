#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_A891C8E0D74F1DB9;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE48_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x112233E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE48_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11223440)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE48_INVOKE_OFFSET UNITYSDK_OFFSET(0x11222E80)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE48__CTOR_OFFSET UNITYSDK_OFFSET(0x11213120)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE48_TypeDefinitionIndex = 46374;

	class InternalGlobals___GEN_DELEGATE48 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE48__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::Class_1_A891C8E0D74F1DB9*>* pModifierList, ::RPG::GameCore::TurnState eCurState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A891C8E0D74F1DB9*>*, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE48_INVOKE_OFFSET))(this, pModifierList, eCurState);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::Class_1_A891C8E0D74F1DB9*>* pModifierList, ::RPG::GameCore::TurnState eCurState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A891C8E0D74F1DB9*>*, ::RPG::GameCore::TurnState, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE48_BEGININVOKE_OFFSET))(this, pModifierList, eCurState, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE48_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
