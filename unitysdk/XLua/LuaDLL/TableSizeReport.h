#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_LUADLL_TABLESIZEREPORT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12E92B60)
#define XLUA_LUADLL_TABLESIZEREPORT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12E92BD0)
#define XLUA_LUADLL_TABLESIZEREPORT_INVOKE_OFFSET UNITYSDK_OFFSET(0x12E92B50)
#define XLUA_LUADLL_TABLESIZEREPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x12E92AE0)

namespace XLua::LuaDLL
{
	inline static constexpr unsigned int TableSizeReport_TypeDefinitionIndex = 48382;

	class TableSizeReport : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_TABLESIZEREPORT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_TABLESIZEREPORT_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::Int32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_TABLESIZEREPORT_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_TABLESIZEREPORT_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
