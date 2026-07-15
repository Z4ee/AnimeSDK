#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE63_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10BDEEA0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE63_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10BDEF10)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE63_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BDEE90)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE63__CTOR_OFFSET UNITYSDK_OFFSET(0x10BDEE20)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE63_TypeDefinitionIndex = 47944;

	class InternalGlobals___GEN_DELEGATE63 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE63__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::GameCore::CakeRaceCellType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE63_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::CakeRaceCellType a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE63_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE63_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
