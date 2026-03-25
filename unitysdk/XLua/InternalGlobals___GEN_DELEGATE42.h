#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE42_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF57F90)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE42_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF58020)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE42_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF57C30)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE42__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49E90)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE42_TypeDefinitionIndex = 40459;

	class InternalGlobals___GEN_DELEGATE42 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE42__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::RPG::GameCore::CharacterSomatoType a, ::RPG::GameCore::CharacterSomatoType b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CharacterSomatoType, ::RPG::GameCore::CharacterSomatoType))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE42_INVOKE_OFFSET))(this, a, b);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::CharacterSomatoType a, ::RPG::GameCore::CharacterSomatoType b, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::CharacterSomatoType, ::RPG::GameCore::CharacterSomatoType, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE42_BEGININVOKE_OFFSET))(this, a, b, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE42_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
