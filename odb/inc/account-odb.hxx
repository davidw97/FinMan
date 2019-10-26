// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#ifndef ACCOUNT_ODB_HXX
#define ACCOUNT_ODB_HXX

#include <odb/version.hxx>

#if (ODB_VERSION != 20400UL)
#error ODB runtime version mismatch
#endif

#include <odb/pre.hxx>

#include "model/account.hxx"

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
  // account
  //
  template <>
  struct class_traits< ::account >
  {
    static const class_kind kind = class_object;
  };

  template <>
  class access::object_traits< ::account >
  {
    public:
    typedef ::account object_type;
    typedef ::account* pointer_type;
    typedef odb::pointer_traits<pointer_type> pointer_traits;

    static const bool polymorphic = false;

    typedef long int id_type;

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

  // retirement_account
  //
  template <>
  struct class_traits< ::retirement_account >
  {
    static const class_kind kind = class_object;
  };

  template <>
  class access::object_traits< ::retirement_account >
  {
    public:
    typedef ::retirement_account object_type;
    typedef ::retirement_account* pointer_type;
    typedef odb::pointer_traits<pointer_type> pointer_traits;

    static const bool polymorphic = false;

    typedef object_traits< ::account >::id_type id_type;

    static const bool auto_id = object_traits< ::account >::auto_id;

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
  // account
  //
  template <typename A>
  struct pointer_query_columns< ::account, id_sqlite, A >
  {
    // acct_num
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        long int,
        sqlite::id_integer >::query_type,
      sqlite::id_integer >
    acct_num_type_;

    static const acct_num_type_ acct_num;

    // balance
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        double,
        sqlite::id_real >::query_type,
      sqlite::id_real >
    balance_type_;

    static const balance_type_ balance;

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

    // owner
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        ::std::string,
        sqlite::id_text >::query_type,
      sqlite::id_text >
    owner_type_;

    static const owner_type_ owner;

    // custodian
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        ::std::string,
        sqlite::id_text >::query_type,
      sqlite::id_text >
    custodian_type_;

    static const custodian_type_ custodian;
  };

  template <typename A>
  const typename pointer_query_columns< ::account, id_sqlite, A >::acct_num_type_
  pointer_query_columns< ::account, id_sqlite, A >::
  acct_num (A::table_name, "\"acct_num\"", 0);

  template <typename A>
  const typename pointer_query_columns< ::account, id_sqlite, A >::balance_type_
  pointer_query_columns< ::account, id_sqlite, A >::
  balance (A::table_name, "\"balance\"", 0);

  template <typename A>
  const typename pointer_query_columns< ::account, id_sqlite, A >::interest_type_
  pointer_query_columns< ::account, id_sqlite, A >::
  interest (A::table_name, "\"interest\"", 0);

  template <typename A>
  const typename pointer_query_columns< ::account, id_sqlite, A >::owner_type_
  pointer_query_columns< ::account, id_sqlite, A >::
  owner (A::table_name, "\"owner\"", 0);

  template <typename A>
  const typename pointer_query_columns< ::account, id_sqlite, A >::custodian_type_
  pointer_query_columns< ::account, id_sqlite, A >::
  custodian (A::table_name, "\"custodian\"", 0);

  template <>
  class access::object_traits_impl< ::account, id_sqlite >:
    public access::object_traits< ::account >
  {
    public:
    struct id_image_type
    {
      long long id_value;
      bool id_null;

      std::size_t version;
    };

    struct image_type
    {
      // _acct_num
      //
      long long _acct_num_value;
      bool _acct_num_null;

      // _balance
      //
      double _balance_value;
      bool _balance_null;

      // _interest
      //
      double _interest_value;
      bool _interest_null;

      // _owner
      //
      details::buffer _owner_value;
      std::size_t _owner_size;
      bool _owner_null;

      // _custodian
      //
      details::buffer _custodian_value;
      std::size_t _custodian_size;
      bool _custodian_null;

      std::size_t version;
    };

    struct extra_statement_cache_type;

    struct owner_tag;
    struct custodian_tag;

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

    static const std::size_t column_count = 5UL;
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
  class access::object_traits_impl< ::account, id_common >:
    public access::object_traits_impl< ::account, id_sqlite >
  {
  };

  // retirement_account
  //
  template <typename A>
  struct pointer_query_columns< ::retirement_account, id_sqlite, A >:
    pointer_query_columns< ::account, id_sqlite, A >
  {
    // account
    //
    typedef pointer_query_columns< ::account, id_sqlite, A > account;
  };

  template <>
  class access::object_traits_impl< ::retirement_account, id_sqlite >:
    public access::object_traits< ::retirement_account >
  {
    public:
    typedef object_traits_impl< ::account, id_sqlite >::id_image_type id_image_type;

    struct image_type: object_traits_impl< ::account, id_sqlite >::image_type
    {
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

    static const std::size_t column_count = 5UL;
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
  class access::object_traits_impl< ::retirement_account, id_common >:
    public access::object_traits_impl< ::retirement_account, id_sqlite >
  {
  };

  // account
  //
  template <>
  struct alias_traits<
    ::auth_user,
    id_sqlite,
    access::object_traits_impl< ::account, id_sqlite >::owner_tag>
  {
    static const char table_name[];
  };

  template <>
  struct alias_traits<
    ::auth_user,
    id_sqlite,
    access::object_traits_impl< ::account, id_sqlite >::custodian_tag>
  {
    static const char table_name[];
  };

  template <>
  struct query_columns_base< ::account, id_sqlite >
  {
    // owner
    //
    typedef
    odb::alias_traits<
      ::auth_user,
      id_sqlite,
      access::object_traits_impl< ::account, id_sqlite >::owner_tag>
    owner_alias_;

    // custodian
    //
    typedef
    odb::alias_traits<
      ::auth_user,
      id_sqlite,
      access::object_traits_impl< ::account, id_sqlite >::custodian_tag>
    custodian_alias_;
  };

  template <typename A>
  struct query_columns< ::account, id_sqlite, A >:
    query_columns_base< ::account, id_sqlite >
  {
    // acct_num
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        long int,
        sqlite::id_integer >::query_type,
      sqlite::id_integer >
    acct_num_type_;

    static const acct_num_type_ acct_num;

    // balance
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        double,
        sqlite::id_real >::query_type,
      sqlite::id_real >
    balance_type_;

    static const balance_type_ balance;

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

    // owner
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        ::std::string,
        sqlite::id_text >::query_type,
      sqlite::id_text >
    owner_column_type_;

    typedef
    odb::query_pointer<
      odb::pointer_query_columns<
        ::auth_user,
        id_sqlite,
        owner_alias_ > >
    owner_pointer_type_;

    struct owner_type_: owner_pointer_type_, owner_column_type_
    {
      owner_type_ (const char* t, const char* c, const char* conv)
        : owner_column_type_ (t, c, conv)
      {
      }
    };

    static const owner_type_ owner;

    // custodian
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        ::std::string,
        sqlite::id_text >::query_type,
      sqlite::id_text >
    custodian_column_type_;

    typedef
    odb::query_pointer<
      odb::pointer_query_columns<
        ::auth_user,
        id_sqlite,
        custodian_alias_ > >
    custodian_pointer_type_;

    struct custodian_type_: custodian_pointer_type_, custodian_column_type_
    {
      custodian_type_ (const char* t, const char* c, const char* conv)
        : custodian_column_type_ (t, c, conv)
      {
      }
    };

    static const custodian_type_ custodian;
  };

  template <typename A>
  const typename query_columns< ::account, id_sqlite, A >::acct_num_type_
  query_columns< ::account, id_sqlite, A >::
  acct_num (A::table_name, "\"acct_num\"", 0);

  template <typename A>
  const typename query_columns< ::account, id_sqlite, A >::balance_type_
  query_columns< ::account, id_sqlite, A >::
  balance (A::table_name, "\"balance\"", 0);

  template <typename A>
  const typename query_columns< ::account, id_sqlite, A >::interest_type_
  query_columns< ::account, id_sqlite, A >::
  interest (A::table_name, "\"interest\"", 0);

  template <typename A>
  const typename query_columns< ::account, id_sqlite, A >::owner_type_
  query_columns< ::account, id_sqlite, A >::
  owner (A::table_name, "\"owner\"", 0);

  template <typename A>
  const typename query_columns< ::account, id_sqlite, A >::custodian_type_
  query_columns< ::account, id_sqlite, A >::
  custodian (A::table_name, "\"custodian\"", 0);

  // retirement_account
  //
  template <typename A>
  struct query_columns< ::retirement_account, id_sqlite, A >:
    query_columns< ::account, id_sqlite, A >
  {
    // account
    //
    typedef query_columns< ::account, id_sqlite, A > account;
  };
}

#include "../i/account-odb.ixx"

#include <odb/post.hxx>

#endif // ACCOUNT_ODB_HXX
