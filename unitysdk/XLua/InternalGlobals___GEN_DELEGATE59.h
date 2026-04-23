#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_2_15E317187C4E8254;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE59_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11227B60)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE59_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11227C00)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE59_INVOKE_OFFSET UNITYSDK_OFFSET(0x112275C0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE59__CTOR_OFFSET UNITYSDK_OFFSET(0x11213260)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE59_TypeDefinitionIndex = 46385;

	class InternalGlobals___GEN_DELEGATE59 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE59__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Class_2_15E317187C4E8254* entity, ::RPG::GameCore::CakeRaceProperty property, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_15E317187C4E8254*, ::RPG::GameCore::CakeRaceProperty, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE59_INVOKE_OFFSET))(this, entity, property, value);
		}

		::System::IAsyncResult* BeginInvoke(::Class_2_15E317187C4E8254* entity, ::RPG::GameCore::CakeRaceProperty property, ::System::Int32 value, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_2_15E317187C4E8254*, ::RPG::GameCore::CakeRaceProperty, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE59_BEGININVOKE_OFFSET))(this, entity, property, value, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE59_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
