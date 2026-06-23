#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_GLOBALIZATION_SORTVERSION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C8B8D00)
#define SYSTEM_GLOBALIZATION_SORTVERSION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C8B8BF0)
#define SYSTEM_GLOBALIZATION_SORTVERSION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C8B8E80)
#define SYSTEM_GLOBALIZATION_SORTVERSION_GET_FULLVERSION_OFFSET UNITYSDK_OFFSET(0x1C8B8B40)
#define SYSTEM_GLOBALIZATION_SORTVERSION_GET_SORTID_OFFSET UNITYSDK_OFFSET(0x1C8B8B50)
#define SYSTEM_GLOBALIZATION_SORTVERSION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C8B8DC0)
#define SYSTEM_GLOBALIZATION_SORTVERSION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C8B8CF0)
#define SYSTEM_GLOBALIZATION_SORTVERSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C8B8B70)
#define SYSTEM_GLOBALIZATION_SORTVERSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B8B60)

namespace System::Globalization
{
	inline static constexpr unsigned int SortVersion_TypeDefinitionIndex = 744;

	class SortVersion : public ::System::Object
	{
	public:
		::System::Guid m_SortId; // 0x10
		::System::Int32 m_NlsVersion; // 0x20

		::System::Void _ctor(::System::Int32 fullVersion, ::System::Guid sortId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTVERSION__CTOR_OFFSET))(this, fullVersion, sortId);
		}

		::System::Void _ctor_1(::System::Int32 nlsVersion, ::System::Int32 effectiveId, ::System::Guid customVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTVERSION__CTOR_1_OFFSET))(this, nlsVersion, effectiveId, customVersion);
		}

		::System::Int32 get_FullVersion()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTVERSION_GET_FULLVERSION_OFFSET))(this);
		}

		::System::Guid get_SortId()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTVERSION_GET_SORTID_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTVERSION_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::System::Globalization::SortVersion* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::SortVersion*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTVERSION_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTVERSION_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Globalization::SortVersion* left, ::System::Globalization::SortVersion* right)
		{
			return ((::System::Boolean(*)(::System::Globalization::SortVersion*, ::System::Globalization::SortVersion*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTVERSION_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::Globalization::SortVersion* left, ::System::Globalization::SortVersion* right)
		{
			return ((::System::Boolean(*)(::System::Globalization::SortVersion*, ::System::Globalization::SortVersion*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTVERSION_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}
