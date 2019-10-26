// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#ifndef DEBT_ODB_HXX
#define DEBT_ODB_HXX

#include <odb/version.hxx>

#if (ODB_VERSION != 20400UL)
#error ODB runtime version mismatch
#endif

#include <odb/pre.hxx>

#include "model/debt.hxx"

#include "account-odb.hxx"
#include "auth_user-odb.hxx"
#include "family-odb.hxx"

#include <memory>
#include <cstddef>
#include <utility>

#include <odb/core.hxx>
#include <odb/traits.hxx>
#include <odb/callback.hxx>
#include <odb/wrapper-traits.hxx>
#include <odb/pointer-traits.hxx>
#include <odb/container-traits.hxx>
#include <odb/no-op-cache-traits.hxx>
#include <odb/result.hxx>
#include <odb/simple-object-result.hxx>

#include <odb/details/unused.hxx>
#include <odb/details/shared-ptr.hxx>

namespace odb
{
  // debt
  //
  template <>
  struct class_traits< ::debt >
  {
    static const class_kind kind = class_object;
  };

  template <>
  class access::object_traits< ::debt >
  {
    public:
    typedef ::debt object_type;
    typedef ::debt* pointer_type;
    typedef odb::pointer_traits<pointer_type> pointer_traits;

    static const bool polymorphic = false;

    static const bool abstract = true;
  };

  // mortgage
  //
  template <>
  struct class_traits< ::mortgage >
  {
    static const class_kind kind = class_object;
  };

  template <>
  class access::object_traits< ::mortgage >
  {
    public:
    typedef ::mortgage object_type;
    typedef ::mortgage* pointer_type;
    typedef odb::pointer_traits<pointer_type> pointer_traits;

    static const bool polymorphic = false;

    typedef unsigned int id_type;

    static const bool auto_id = false;

    static const bool abstract = false;

    static id_type
    id (const object_type&);

    typedef
    no_op_pointer_cache_traits<pointer_type>
    pointer_cache_traits;

    typedef
    no_op_reference_cache_traits<object_type>
    reference_cache_traits;

    static void
    callback (database&, object_type&, callback_event);

    static void
    callback (database&, const object_type&, callback_event);
  };
}

#include <odb/details/buffer.hxx>

#include <odb/sqlite/version.hxx>
#include <odb/sqlite/forward.hxx>
#include <odb/sqlite/binding.hxx>
#include <odb/sqlite/sqlite-types.hxx>
#include <odb/sqlite/query.hxx>

namespace odb
{
  // debt
  //
  template <typename A>
  struct pointer_query_columns< ::debt, id_sqlite, A >
  {
    // principal
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        double,
        sqlite::id_real >::query_type,
      sqlite::id_real >
    principal_type_;

    static const principal_type_ principal;

    // interest
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        float,
        sqlite::id_real >::query_type,
      sqlite::id_real >
    interest_type_;

    static const interest_type_ interest;

    // start_date
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        ::time_t,
        sqlite::id_integer >::query_type,
      sqlite::id_integer >
    start_date_type_;

    static const start_date_type_ start_date;

    // end_date
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        ::time_t,
        sqlite::id_integer >::query_type,
      sqlite::id_integer >
    end_date_type_;

    static const end_date_type_ end_date;

    // type
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        ::std::string,
        sqlite::id_text >::query_type,
      sqlite::id_text >
    type_type_;

    static const type_type_ type;

    // from_acct
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        long int,
        sqlite::id_integer >::query_type,
      sqlite::id_integer >
    from_acct_type_;

    static const from_acct_type_ from_acct;
  };

  template <typename A>
  const typename pointer_query_columns< ::debt, id_sqlite, A >::principal_type_
  pointer_query_columns< ::debt, id_sqlite, A >::
  principal (A::table_name, "\"principal\"", 0);

  template <typename A>
  const typename pointer_query_columns< ::debt, id_sqlite, A >::interest_type_
  pointer_query_columns< ::debt, id_sqlite, A >::
  interest (A::table_name, "\"interest\"", 0);

  template <typename A>
  const typename pointer_query_columns< ::debt, id_sqlite, A >::start_date_type_
  pointer_query_columns< ::debt, id_sqlite, A >::
  start_date (A::table_name, "\"start_date\"", 0);

  template <typename A>
  const typename pointer_query_columns< ::debt, id_sqlite, A >::end_date_type_
  pointer_query_columns< ::debt, id_sqlite, A >::
  end_date (A::table_name, "\"end_date\"", 0);

  template <typename A>
  const typename pointer_query_columns< ::debt, id_sqlite, A >::type_type_
  pointer_query_columns< ::debt, id_sqlite, A >::
  type (A::table_name, "\"type\"", 0);

  template <typename A>
  const typename pointer_query_columns< ::debt, id_sqlite, A >::from_acct_type_
  pointer_query_columns< ::debt, id_sqlite, A >::
  from_acct (A::table_name, "\"from_acct\"", 0);

  template <>
  class access::object_traits_impl< ::debt, id_sqlite >:
    public access::object_traits< ::debt >
  {
    public:
    struct image_type
    {
      // _principal
      //
      double _principal_value;
      bool _principal_null;

      // _interest
      //
      double _interest_value;
      bool _interest_null;

      // _start_date
      //
      long long _start_date_value;
      bool _start_date_null;

      // _end_date
      //
      long long _end_date_value;
      bool _end_date_null;

      // _type
      //
      details::buffer _type_value;
      std::size_t _type_size;
      bool _type_null;

      // _from_acct
      //
      long long _from_acct_value;
      bool _from_acct_null;
    };

    struct from_acct_tag;

    static bool
    grow (image_type&,
          bool*);

    static void
    bind (sqlite::bind*,
          image_type&,
          sqlite::statement_kind);

    static bool
    init (image_type&,
          const object_type&,
          sqlite::statement_kind);

    static void
    init (object_type&,
          const image_type&,
          database*);
  };

  // mortgage
  //
  template <typename A>
  struct pointer_query_columns< ::mortgage, id_sqlite, A >:
    pointer_query_columns< ::debt, id_sqlite, A >
  {
    // debt
    //
    typedef pointer_query_columns< ::debt, id_sqlite, A > debt;

    // id
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        unsigned int,
        sqlite::id_integer >::query_type,
      sqlite::id_integer >
    id_type_;

    static const id_type_ id;
  };

  template <typename A>
  const typename pointer_query_columns< ::mortgage, id_sqlite, A >::id_type_
  pointer_query_columns< ::mortgage, id_sqlite, A >::
  id (A::table_name, "\"id\"", 0);

  template <>
  class access::object_traits_impl< ::mortgage, id_sqlite >:
    public access::object_traits< ::mortgage >
  {
    public:
    struct id_image_type
    {
      long long id_value;
      bool id_null;

      std::size_t version;
    };

    struct image_type: object_traits_impl< ::debt, id_sqlite >::image_type
    {
      // _id
      //
      long long _id_value;
      bool _id_null;

      std::size_t version;
    };

    struct extra_statement_cache_type;

    using object_traits<object_type>::id;

    static id_type
    id (const image_type&);

    static bool
    grow (image_type&,
          bool*);

    static void
    bind (sqlite::bind*,
          image_type&,
          sqlite::statement_kind);

    static void
    bind (sqlite::bind*, id_image_type&);

    static bool
    init (image_type&,
          const object_type&,
          sqlite::statement_kind);

    static void
    init (object_type&,
          const image_type&,
          database*);

    static void
    init (id_image_type&, const id_type&);

    typedef sqlite::object_statements<object_type> statements_type;

    typedef sqlite::query_base query_base_type;

    static const std::size_t column_count = 7UL;
    static const std::size_t id_column_count = 1UL;
    static const std::size_t inverse_column_count = 0UL;
    static const std::size_t readonly_column_count = 0UL;
    static const std::size_t managed_optimistic_column_count = 0UL;

    static const std::size_t separate_load_column_count = 0UL;
    static const std::size_t separate_update_column_count = 0UL;

    static const bool versioned = false;

    static const char persist_statement[];
    static const char find_statement[];
    static const char update_statement[];
    static const char erase_statement[];
    static const char query_statement[];
    static const char erase_query_statement[];

    static const char table_name[];

    static void
    persist (database&, const object_type&);

    static pointer_type
    find (database&, const id_type&);

    static bool
    find (database&, const id_type&, object_type&);

    static bool
    reload (database&, object_type&);

    static void
    update (database&, const object_type&);

    static void
    erase (database&, const id_type&);

    static void
    erase (database&, const object_type&);

    static result<object_type>
    query (database&, const query_base_type&);

    static unsigned long long
    erase_query (database&, const query_base_type&);

    public:
    static bool
    find_ (statements_type&,
           const id_type*);

    static void
    load_ (statements_type&,
           object_type&,
           bool reload);
  };

  template <>
  class access::object_traits_impl< ::mortgage, id_common >:
    public access::object_traits_impl< ::mortgage, id_sqlite >
  {
  };

  // debt
  //
  template <>
  struct alias_traits<
    ::account,
    id_sqlite,
    access::object_traits_impl< ::debt, id_sqlite >::from_acct_tag>
  {
    static const char table_name[];
  };

  template <>
  struct query_columns_base< ::debt, id_sqlite >
  {
    // from_acct
    //
    typedef
    odb::alias_traits<
      ::account,
      id_sqlite,
      access::object_traits_impl< ::debt, id_sqlite >::from_acct_tag>
    from_acct_alias_;
  };

  template <typename A>
  struct query_columns< ::debt, id_sqlite, A >:
    query_columns_base< ::debt, id_sqlite >
  {
    // principal
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        double,
        sqlite::id_real >::query_type,
      sqlite::id_real >
    principal_type_;

    static const principal_type_ principal;

    // interest
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        float,
        sqlite::id_real >::query_type,
      sqlite::id_real >
    interest_type_;

    static const interest_type_ interest;

    // start_date
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        ::time_t,
        sqlite::id_integer >::query_type,
      sqlite::id_integer >
    start_date_type_;

    static const start_date_type_ start_date;

    // end_date
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        ::time_t,
        sqlite::id_integer >::query_type,
      sqlite::id_integer >
    end_date_type_;

    static const end_date_type_ end_date;

    // type
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        ::std::string,
        sqlite::id_text >::query_type,
      sqlite::id_text >
    type_type_;

    static const type_type_ type;

    // from_acct
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        long int,
        sqlite::id_integer >::query_type,
      sqlite::id_integer >
    from_acct_column_type_;

    typedef
    odb::query_pointer<
      odb::pointer_query_columns<
        ::account,
        id_sqlite,
        from_acct_alias_ > >
    from_acct_pointer_type_;

    struct from_acct_type_: from_acct_pointer_type_, from_acct_column_type_
    {
      from_acct_type_ (const char* t, const char* c, const char* conv)
        : from_acct_column_type_ (t, c, conv)
      {
      }
    };

    static const from_acct_type_ from_acct;
  };

  template <typename A>
  const typename query_columns< ::debt, id_sqlite, A >::principal_type_
  query_columns< ::debt, id_sqlite, A >::
  principal (A::table_name, "\"principal\"", 0);

  template <typename A>
  const typename query_columns< ::debt, id_sqlite, A >::interest_type_
  query_columns< ::debt, id_sqlite, A >::
  interest (A::table_name, "\"interest\"", 0);

  template <typename A>
  const typename query_columns< ::debt, id_sqlite, A >::start_date_type_
  query_columns< ::debt, id_sqlite, A >::
  start_date (A::table_name, "\"start_date\"", 0);

  template <typename A>
  const typename query_columns< ::debt, id_sqlite, A >::end_date_type_
  query_columns< ::debt, id_sqlite, A >::
  end_date (A::table_name, "\"end_date\"", 0);

  template <typename A>
  const typename query_columns< ::debt, id_sqlite, A >::type_type_
  query_columns< ::debt, id_sqlite, A >::
  type (A::table_name, "\"type\"", 0);

  template <typename A>
  const typename query_columns< ::debt, id_sqlite, A >::from_acct_type_
  query_columns< ::debt, id_sqlite, A >::
  from_acct (A::table_name, "\"from_acct\"", 0);

  // mortgage
  //
  template <typename A>
  struct query_columns< ::mortgage, id_sqlite, A >:
    query_columns< ::debt, id_sqlite, A >
  {
    // debt
    //
    typedef query_columns< ::debt, id_sqlite, A > debt;

    // id
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        unsigned int,
        sqlite::id_integer >::query_type,
      sqlite::id_integer >
    id_type_;

    static const id_type_ id;
  };

  template <typename A>
  const typename query_columns< ::mortgage, id_sqlite, A >::id_type_
  query_columns< ::mortgage, id_sqlite, A >::
  id (A::table_name, "\"id\"", 0);
}

#include "../i/debt-odb.ixx"

#include <odb/post.hxx>

#endif // DEBT_ODB_HXX
