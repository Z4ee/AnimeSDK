#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_PATHLIST_PATHLISTCOMPARER_SYSTEM_COLLECTIONS_ICOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x186FFFF0)
#define SYSTEM_NET_PATHLIST_PATHLISTCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x187001B0)
#define SYSTEM_NET_PATHLIST_PATHLISTCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x187001A0)

namespace System::Net
{
	inline static constexpr unsigned int PathList_PathListComparer_TypeDefinitionIndex = 2794;

	class PathList_PathListComparer : public ::System::Object
	{
	public:
		static ::System::Net::PathList_PathListComparer** StaticGet_StaticInstance()
		{
			return (::System::Net::PathList_PathListComparer**)Il2CppClass::FromTypeDefinitionIndex(PathList_PathListComparer_TypeDefinitionIndex)->GetStaticField(0x126C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PATHLIST_PATHLISTCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_PATHLIST_PATHLISTCOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 System_Collections_IComparer_Compare(::System::Object* ol, ::System::Object* or)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_PATHLIST_PATHLISTCOMPARER_SYSTEM_COLLECTIONS_ICOMPARER_COMPARE_OFFSET))(this, ol, or);
		}
	};
}
