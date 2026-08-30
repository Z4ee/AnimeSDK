#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/BezierPoint.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SPLINE_EXTRUDE_1_OFFSET UNITYSDK_OFFSET(0x1923EA50)
#define UNITYENGINE_PROBUILDER_SPLINE_EXTRUDE_2_OFFSET UNITYSDK_OFFSET(0x1923F480)
#define UNITYENGINE_PROBUILDER_SPLINE_EXTRUDE_OFFSET UNITYSDK_OFFSET(0x1923E980)
#define UNITYENGINE_PROBUILDER_SPLINE_GETCONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x1923EB20)
#define UNITYENGINE_PROBUILDER_SPLINE_GETRINGROTATION_OFFSET UNITYSDK_OFFSET(0x19240310)
#define UNITYENGINE_PROBUILDER_SPLINE_VERTEXRING_OFFSET UNITYSDK_OFFSET(0x19240F20)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Spline_TypeDefinitionIndex = 43247;

	class Spline : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::ProBuilderMesh* Extrude(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>* a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SPLINE_EXTRUDE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void Extrude_1(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>* a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Boolean a6, ::UnityEngine::ProBuilder::ProBuilderMesh*& a7)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::UnityEngine::ProBuilder::ProBuilderMesh*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SPLINE_EXTRUDE_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetControlPoints(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* a4)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SPLINE_GETCONTROLPOINTS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Extrude_2(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a1, ::System::Single a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5, ::UnityEngine::ProBuilder::ProBuilderMesh*& a6, ::System::Collections::Generic::IList_1<::UnityEngine::Quaternion>* a7)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Boolean, ::UnityEngine::ProBuilder::ProBuilderMesh*&, ::System::Collections::Generic::IList_1<::UnityEngine::Quaternion>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SPLINE_EXTRUDE_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::UnityEngine::Quaternion GetRingRotation(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Single& a4)
		{
			return ((::UnityEngine::Quaternion(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Boolean, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SPLINE_GETRINGROTATION_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* VertexRing(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SPLINE_VERTEXRING_OFFSET))(a1, a2, a3, a4);
		}
	};
}
