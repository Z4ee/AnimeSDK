#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UTF8JSON_INTERNAL_BYTEARRAYCOMPARER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FAB36B0)
#define UTF8JSON_INTERNAL_BYTEARRAYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FAB3620)

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int ByteArrayComparer_TypeDefinitionIndex = 95165;

	class ByteArrayComparer : public ::System::Object
	{
	public:
		static ::System::Boolean Equals(::Il2CppArray<::System::Byte>* xs, ::System::Int32 xsOffset, ::System::Int32 xsCount, ::Il2CppArray<::System::Byte>* ys)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_BYTEARRAYCOMPARER_EQUALS_OFFSET))(xs, xsOffset, xsCount, ys);
		}

		static ::System::Boolean Equals_1(::Il2CppArray<::System::Byte>* xs, ::System::Int32 xsOffset, ::System::Int32 xsCount, ::Il2CppArray<::System::Byte>* ys, ::System::Int32 ysOffset, ::System::Int32 ysCount)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_BYTEARRAYCOMPARER_EQUALS_1_OFFSET))(xs, xsOffset, xsCount, ys, ysOffset, ysCount);
		}
	};
}
