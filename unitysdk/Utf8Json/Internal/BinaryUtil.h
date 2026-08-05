#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UTF8JSON_INTERNAL_BINARYUTIL_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x1FB718B0)
#define UTF8JSON_INTERNAL_BINARYUTIL_FASTCLONEWITHRESIZE_OFFSET UNITYSDK_OFFSET(0x1FB71AD0)
#define UTF8JSON_INTERNAL_BINARYUTIL_FASTRESIZE_OFFSET UNITYSDK_OFFSET(0x1FB71A10)

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int BinaryUtil_TypeDefinitionIndex = 95164;

	class BinaryUtil : public ::System::Object
	{
	public:
		// static const ::System::Int32 ArrayMaxSize = 0x7FFFFFC7; // 0x0

		static ::System::Void EnsureCapacity(::Il2CppArray<::System::Byte>*& bytes, ::System::Int32 offset, ::System::Int32 appendLength)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_BINARYUTIL_ENSURECAPACITY_OFFSET))(bytes, offset, appendLength);
		}

		static ::System::Void FastResize(::Il2CppArray<::System::Byte>*& array, ::System::Int32 newSize)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*&, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_BINARYUTIL_FASTRESIZE_OFFSET))(array, newSize);
		}

		static ::Il2CppArray<::System::Byte>* FastCloneWithResize(::Il2CppArray<::System::Byte>* src, ::System::Int32 newSize)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_BINARYUTIL_FASTCLONEWITHRESIZE_OFFSET))(src, newSize);
		}
	};
}
