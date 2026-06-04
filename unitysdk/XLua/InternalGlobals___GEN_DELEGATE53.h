#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE53_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12E8A5C0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE53_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12E8A620)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE53_INVOKE_OFFSET UNITYSDK_OFFSET(0x12E8A5B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE53__CTOR_OFFSET UNITYSDK_OFFSET(0x12E8A4C0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE53_TypeDefinitionIndex = 46969;

	class InternalGlobals___GEN_DELEGATE53 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE53__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* Invoke(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE53_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a1, ::System::UInt32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE53_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::GameEntity* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE53_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
