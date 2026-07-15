#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC0C4FF0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS___C__DISPLAYCLASS0_0__DELETEVERTICES_B__0_OFFSET UNITYSDK_OFFSET(0xC0C6F90)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS___C__DISPLAYCLASS0_0__DELETEVERTICES_B__1_OFFSET UNITYSDK_OFFSET(0xC0C7000)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS___C__DISPLAYCLASS0_0__DELETEVERTICES_B__2_OFFSET UNITYSDK_OFFSET(0xC0C7040)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS___C__DISPLAYCLASS0_0__DELETEVERTICES_B__3_OFFSET UNITYSDK_OFFSET(0xC0C70B0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int DeleteElements___c__DisplayClass0_0_TypeDefinitionIndex = 41688;

	class DeleteElements___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* offset; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* sorted; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _DeleteVertices_b__0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS___C__DISPLAYCLASS0_0__DELETEVERTICES_B__0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> _DeleteVertices_b__1(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> a1)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS___C__DISPLAYCLASS0_0__DELETEVERTICES_B__1_OFFSET))(this, a1);
		}

		::System::Boolean _DeleteVertices_b__2(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS___C__DISPLAYCLASS0_0__DELETEVERTICES_B__2_OFFSET))(this, a1);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> _DeleteVertices_b__3(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> a1)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS___C__DISPLAYCLASS0_0__DELETEVERTICES_B__3_OFFSET))(this, a1);
		}
	};
}
